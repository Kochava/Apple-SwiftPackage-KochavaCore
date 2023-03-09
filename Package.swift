// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KochavaCore",
    platforms: [
        .iOS("12.4"),
        .macOS("10.14"),
        .tvOS("12.4"),
        .watchOS("5.2")
    ],
    products:
    [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KochavaCore",
            targets:
            [
                "KochavaCore"
            ]
        ),
    ],
    dependencies:
    [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets:
    [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "KochavaCore",
            path: "KochavaCore.xcframework"
        ),
        .testTarget(
            name: "KochavaCoreTests",
            dependencies:
            [
                "KochavaCore"
            ]
        ),
    ]
)
