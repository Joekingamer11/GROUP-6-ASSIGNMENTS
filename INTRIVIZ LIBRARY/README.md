# INTRIVIZ: A C++ Data Visualization Library

## Group 6 Members

| No. | Name | Registration Number | Course |
|-----|------|---------------------|--------|
| 1 (Lead) | KIMULI JOSEPH | 25/U/03810/PS | BCCE |
| 2 | NANGOSHA ANNE MARY | 25/U/0721 | BBIO |
| 3 | NAKIBUULE MARIA LIZ | 25/U/07957/PS | BBIO |
| 4 | ANNA KAGEMULO MTABAZI | 25/U/08565/PS | BELE |
| 5 | RWOTOLARA SUNDAY JUNIOR | 25/U/0723 | BBIO |
| 6 | KWAGALA REBECCA | 25/U/0835 | BELE |
| 7 | AMVIIKO REBECCA NATASHA | 25/U/08687/PS | BCCE |
| 8 | KALULE WEGNA | 25/U/07936/PS | BBIO |
| 9 | KADAMA HUMPHREY ARTHUR | 25/U/0718 | BBIO |
| 10 | KALEMA TITUS LARRY | 25/U/07935/PS | BBIO |

## Objective
Main aim: a reusable C++ library, not a standalone program, that turns tabular data (CSV) into statistical charts, in the spirit of Seaborn.
What a user should be able to do: load a CSV, clean it, summarise it, draw a swarm plot, point plot or heatmap, and save the result as an image, in a few lines of code.
Learning goals from the instructions: OOP in C++, a clear public interface, suitable data structures and algorithms, a professional folder structure, tests, documentation, teamwork with Git and GitHub, and being able to explain our design.
Design goals: clean separation of headers (include/) and implementation (src/), clear errors for bad input, no duplicated code, builds on Linux, macOS and Windows with no outside libraries.
Possible angle: because C++ has no built-in graphics, we also built our own drawing layer (pixels, lines, text, image files).

## 1. Project Structure
include/intriviz/: public headers, i.e. what users #include.
src/: the matching implementation files.
tests/: one test_*.cpp per module, plus the small test helper.
examples/: short programs showing how to use the library.
data/input/: sample CSV files.
data/output/: images the examples produce.
reports/: weekly reports, the final report, the AI declaration and team profiles.
Root files: CMakeLists.txt, LICENSE, .gitignore and this README.

Then group the modules by job. For each group, write one line on its purpose:

Data: dataset, csv_loader, preprocess, groupby, stats, summary
Scaling: scale, ticks, categorical_scale
Drawing: canvas, draw, font, colormap, image_export
Layout: theme, axes, labels, annotation, colorbar, legend, figure
Plots: swarmplot, pointplot, heatmap, plus the one-line quick interface
Shared helpers: types, error, validation, text_util

## 2. Requirements and Dependencies
Compiler: needs C++17 support.
CMake: version 3.16 or newer.
Git: only to clone.
Outside libraries: none, everything is written by us.
To see output: an image viewer that opens BMP (and PPM, or PNG if you finish it).
Optional build switches: INTRIVIZ_BUILD_EXAMPLES and INTRIVIZ_BUILD_TESTS, both on by default.

## 3. Main Features
Data loading: CSV into a Dataset, with quoted fields, type detection and missing values.
Preprocessing: dropping or filling missing values, filtering rows, normalising, grouping by category.
Statistical summaries: mean, median, spread, quantiles, correlation, bootstrap confidence intervals, a describe table.
Swarm plots: every point shown, spread sideways so none overlap.
Point plots: mean per category with a confidence interval.
Heatmaps: a colour grid with optional numbers and a colorbar.
Axis scaling: linear, log and category scales with tidy tick marks.
Labels and annotations: titles, axis labels, text, reference lines, arrows, a legend.
Plot rendering: our own canvas, shapes, built-in pixel font and themes.
Image export: BMP and PPM, and PNG if finished.

## 4. Build the Library
### Linux and macOS
<!-- HAND-TYPE the exact commands you tested. -->
### Windows
<!-- HAND-TYPE the exact commands you tested. -->

## 5. Install the Library (if your CMake supports it)
### Linux and macOS
<!-- HAND-TYPE. -->
### Windows
<!-- HAND-TYPE. -->

## 6. Use the Library in Your Own Program
<!-- HAND-TYPE. The include line, a short program that loads a CSV and saves a plot,
     and the command to compile and run it. -->

## 7. Examples
<!-- HAND-TYPE. Each file in examples/, what it demonstrates, and what image it writes. -->

## 8. Run the Tests
<!-- HAND-TYPE. Commands and what a passing run looks like. -->

## 9. Limitations
<!-- HAND-TYPE. Honest list of what is missing or known to be buggy. -->

## 10. Contributions by Group Members
<!-- HAND-TYPE. For each member: modules written, tests written, modules reviewed. -->

## 11. How We Collaborated as a Team
<!-- HAND-TYPE. Meetings, branches, pull requests, reviews, how problems were handled. -->
