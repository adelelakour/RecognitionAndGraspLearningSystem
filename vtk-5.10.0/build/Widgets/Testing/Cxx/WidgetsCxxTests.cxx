#include <ctype.h>  /* NOLINT */
#include <stdio.h>  /* NOLINT */
#include <stdlib.h> /* NOLINT */
#include <string.h> /* NOLINT */
#include <time.h>   /* NOLINT */

#if defined(_MSC_VER)
#pragma warning(disable : 4996) /* deprecation */
#endif

#include "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Rendering/vtkTestingObjectFactory.h"


/* Forward declare test functions. */
int TestAffineWidget(int, char*[]);
int TestButtonWidget(int, char*[]);
int TestDistanceWidget3D(int, char*[]);
int TestHandleWidget(int, char*[]);
int TestLogoWidget(int, char*[]);
int TestProgrammaticPlacement(int, char*[]);
int TestRectilinearWipeWidget(int, char*[]);
int TerrainPolylineEditor(int, char*[]);
int TestDijkstraGraphGeodesicPath(int, char*[]);
int TestPolyPlane(int, char*[]);
int vtkAngleWidgetTest1(int, char*[]);
int vtkBiDimensionalWidgetTest1(int, char*[]);
int vtkImplicitPlaneWidget2Test1(int, char*[]);
int vtkLineWidget2Test1(int, char*[]);
int vtkSeedWidgetTest1(int, char*[]);
int vtkSplineWidget2Test1(int, char*[]);
int vtkBorderWidgetTest1(int, char*[]);
int vtkCaptionWidgetTest1(int, char*[]);
int vtkTextWidgetTest1(int, char*[]);
int vtkHoverWidgetTest1(int, char*[]);
int vtkBalloonWidgetTest1(int, char*[]);
int vtkAngleRepresentation2DTest1(int, char*[]);
int vtkAngleRepresentation3DTest1(int, char*[]);
int vtkBalloonRepresentationTest1(int, char*[]);
int vtkBiDimensionalRepresentation2DTest1(int, char*[]);
int vtkCaptionRepresentationTest1(int, char*[]);
int vtkTextRepresentationTest1(int, char*[]);
int vtkLineRepresentationTest1(int, char*[]);
int vtkSeedRepresentationTest1(int, char*[]);
int BoxWidget(int, char*[]);
int BoxWidget2(int, char*[]);
int ImagePlaneWidget(int, char*[]);
int TestAngleWidget2D(int, char*[]);
int TestAngleWidget3D(int, char*[]);
int TestBalloonWidget(int, char*[]);
int TestBiDimensionalWidget(int, char*[]);
int TestBorderWidget(int, char*[]);
int TestBrokenLineWidget(int, char*[]);
int TestCameraWidget(int, char*[]);
int TestCellCentersPointPlacer(int, char*[]);
int TestCenteredSliderWidget2D(int, char*[]);
int TestCheckerboardWidget(int, char*[]);
int TestConstrainedHandleWidget(int, char*[]);
int TestContourWidget2(int, char*[]);
int TestDistanceWidget(int, char*[]);
int TestDijkstraImageGeodesicPath(int, char*[]);
int TestFixedSizeHandleRepresentation3D(int, char*[]);
int TestFocalPlaneContour(int, char*[]);
int TestHandleWidget2D(int, char*[]);
int TestImageActorContourWidget(int, char*[]);
int TestImageTracerWidget(int, char*[]);
int TestImplicitPlaneWidget(int, char*[]);
int TestImplicitPlaneWidget2(int, char*[]);
int TestImplicitPlaneWidget2b(int, char*[]);
int TestImplicitPlaneWidget2LockNormalToCamera(int, char*[]);
int TestLineWidget(int, char*[]);
int TestLineWidget2(int, char*[]);
int TestLogoWidgetAlphaBlending(int, char*[]);
int TestLogoWidgetDepthPeeling(int, char*[]);
int TestOrientationMarkerWidget(int, char*[]);
int TestOrthoPlanes(int, char*[]);
int TestPlaneWidget(int, char*[]);
int TestPlaybackWidget(int, char*[]);
int TestPointHandleRepresentation3D(int, char*[]);
int TestPointWidget(int, char*[]);
int TestParallelopipedWidget(int, char*[]);
int TestPolygonalRepresentationHandleWidget(int, char*[]);
int TestPolygonalHandleRepresentations(int, char*[]);
int TestPolygonalSurfaceConstrainedDistanceWidget(int, char*[]);
int TestSeedWidget(int, char*[]);
int TestSeedWidgetNonUniformRepresentations(int, char*[]);
int TestSphereHandleWidget(int, char*[]);
int TestResliceCursorWidget2(int, char*[]);
int TestResliceCursorWidget3(int, char*[]);
int TestScalarBarWidget(int, char*[]);
int TestSeedWidget2(int, char*[]);
int TestSliderWidget(int, char*[]);
int TestSliderWidget2D(int, char*[]);
int TestSplineWidget(int, char*[]);
int TestSurfaceConstrainedHandleWidget(int, char*[]);
int TestTensorProbeWidget(int, char*[]);
int TestTextWidget(int, char*[]);


#ifdef __cplusplus
#  define CM_CAST(TYPE, EXPR) static_cast<TYPE>(EXPR)
#  if __cplusplus >= 201103L
#    define CM_NULL nullptr
#  else
#    define CM_NULL NULL
#  endif
#  define CM_NAMESPACE_BEGIN namespace {
#  define CM_NAMESPACE_END }
#  define CM_LOCAL
#else
#  define CM_CAST(TYPE, EXPR) (TYPE)(EXPR)
#  define CM_NULL NULL
#  define CM_NAMESPACE_BEGIN
#  define CM_NAMESPACE_END
#  define CM_LOCAL static
#endif

CM_NAMESPACE_BEGIN

/* Create map.  */

typedef int (*MainFuncPointer)(int, char* []); /* NOLINT */
typedef struct /* NOLINT */
{
  const char* name;
  MainFuncPointer func;
} functionMapEntry;

CM_LOCAL const functionMapEntry cmakeGeneratedFunctionMapEntries[] = {
    {
    "TestAffineWidget",
    TestAffineWidget
  },
  {
    "TestButtonWidget",
    TestButtonWidget
  },
  {
    "TestDistanceWidget3D",
    TestDistanceWidget3D
  },
  {
    "TestHandleWidget",
    TestHandleWidget
  },
  {
    "TestLogoWidget",
    TestLogoWidget
  },
  {
    "TestProgrammaticPlacement",
    TestProgrammaticPlacement
  },
  {
    "TestRectilinearWipeWidget",
    TestRectilinearWipeWidget
  },
  {
    "TerrainPolylineEditor",
    TerrainPolylineEditor
  },
  {
    "TestDijkstraGraphGeodesicPath",
    TestDijkstraGraphGeodesicPath
  },
  {
    "TestPolyPlane",
    TestPolyPlane
  },
  {
    "vtkAngleWidgetTest1",
    vtkAngleWidgetTest1
  },
  {
    "vtkBiDimensionalWidgetTest1",
    vtkBiDimensionalWidgetTest1
  },
  {
    "vtkImplicitPlaneWidget2Test1",
    vtkImplicitPlaneWidget2Test1
  },
  {
    "vtkLineWidget2Test1",
    vtkLineWidget2Test1
  },
  {
    "vtkSeedWidgetTest1",
    vtkSeedWidgetTest1
  },
  {
    "vtkSplineWidget2Test1",
    vtkSplineWidget2Test1
  },
  {
    "vtkBorderWidgetTest1",
    vtkBorderWidgetTest1
  },
  {
    "vtkCaptionWidgetTest1",
    vtkCaptionWidgetTest1
  },
  {
    "vtkTextWidgetTest1",
    vtkTextWidgetTest1
  },
  {
    "vtkHoverWidgetTest1",
    vtkHoverWidgetTest1
  },
  {
    "vtkBalloonWidgetTest1",
    vtkBalloonWidgetTest1
  },
  {
    "vtkAngleRepresentation2DTest1",
    vtkAngleRepresentation2DTest1
  },
  {
    "vtkAngleRepresentation3DTest1",
    vtkAngleRepresentation3DTest1
  },
  {
    "vtkBalloonRepresentationTest1",
    vtkBalloonRepresentationTest1
  },
  {
    "vtkBiDimensionalRepresentation2DTest1",
    vtkBiDimensionalRepresentation2DTest1
  },
  {
    "vtkCaptionRepresentationTest1",
    vtkCaptionRepresentationTest1
  },
  {
    "vtkTextRepresentationTest1",
    vtkTextRepresentationTest1
  },
  {
    "vtkLineRepresentationTest1",
    vtkLineRepresentationTest1
  },
  {
    "vtkSeedRepresentationTest1",
    vtkSeedRepresentationTest1
  },
  {
    "BoxWidget",
    BoxWidget
  },
  {
    "BoxWidget2",
    BoxWidget2
  },
  {
    "ImagePlaneWidget",
    ImagePlaneWidget
  },
  {
    "TestAngleWidget2D",
    TestAngleWidget2D
  },
  {
    "TestAngleWidget3D",
    TestAngleWidget3D
  },
  {
    "TestBalloonWidget",
    TestBalloonWidget
  },
  {
    "TestBiDimensionalWidget",
    TestBiDimensionalWidget
  },
  {
    "TestBorderWidget",
    TestBorderWidget
  },
  {
    "TestBrokenLineWidget",
    TestBrokenLineWidget
  },
  {
    "TestCameraWidget",
    TestCameraWidget
  },
  {
    "TestCellCentersPointPlacer",
    TestCellCentersPointPlacer
  },
  {
    "TestCenteredSliderWidget2D",
    TestCenteredSliderWidget2D
  },
  {
    "TestCheckerboardWidget",
    TestCheckerboardWidget
  },
  {
    "TestConstrainedHandleWidget",
    TestConstrainedHandleWidget
  },
  {
    "TestContourWidget2",
    TestContourWidget2
  },
  {
    "TestDistanceWidget",
    TestDistanceWidget
  },
  {
    "TestDijkstraImageGeodesicPath",
    TestDijkstraImageGeodesicPath
  },
  {
    "TestFixedSizeHandleRepresentation3D",
    TestFixedSizeHandleRepresentation3D
  },
  {
    "TestFocalPlaneContour",
    TestFocalPlaneContour
  },
  {
    "TestHandleWidget2D",
    TestHandleWidget2D
  },
  {
    "TestImageActorContourWidget",
    TestImageActorContourWidget
  },
  {
    "TestImageTracerWidget",
    TestImageTracerWidget
  },
  {
    "TestImplicitPlaneWidget",
    TestImplicitPlaneWidget
  },
  {
    "TestImplicitPlaneWidget2",
    TestImplicitPlaneWidget2
  },
  {
    "TestImplicitPlaneWidget2b",
    TestImplicitPlaneWidget2b
  },
  {
    "TestImplicitPlaneWidget2LockNormalToCamera",
    TestImplicitPlaneWidget2LockNormalToCamera
  },
  {
    "TestLineWidget",
    TestLineWidget
  },
  {
    "TestLineWidget2",
    TestLineWidget2
  },
  {
    "TestLogoWidgetAlphaBlending",
    TestLogoWidgetAlphaBlending
  },
  {
    "TestLogoWidgetDepthPeeling",
    TestLogoWidgetDepthPeeling
  },
  {
    "TestOrientationMarkerWidget",
    TestOrientationMarkerWidget
  },
  {
    "TestOrthoPlanes",
    TestOrthoPlanes
  },
  {
    "TestPlaneWidget",
    TestPlaneWidget
  },
  {
    "TestPlaybackWidget",
    TestPlaybackWidget
  },
  {
    "TestPointHandleRepresentation3D",
    TestPointHandleRepresentation3D
  },
  {
    "TestPointWidget",
    TestPointWidget
  },
  {
    "TestParallelopipedWidget",
    TestParallelopipedWidget
  },
  {
    "TestPolygonalRepresentationHandleWidget",
    TestPolygonalRepresentationHandleWidget
  },
  {
    "TestPolygonalHandleRepresentations",
    TestPolygonalHandleRepresentations
  },
  {
    "TestPolygonalSurfaceConstrainedDistanceWidget",
    TestPolygonalSurfaceConstrainedDistanceWidget
  },
  {
    "TestSeedWidget",
    TestSeedWidget
  },
  {
    "TestSeedWidgetNonUniformRepresentations",
    TestSeedWidgetNonUniformRepresentations
  },
  {
    "TestSphereHandleWidget",
    TestSphereHandleWidget
  },
  {
    "TestResliceCursorWidget2",
    TestResliceCursorWidget2
  },
  {
    "TestResliceCursorWidget3",
    TestResliceCursorWidget3
  },
  {
    "TestScalarBarWidget",
    TestScalarBarWidget
  },
  {
    "TestSeedWidget2",
    TestSeedWidget2
  },
  {
    "TestSliderWidget",
    TestSliderWidget
  },
  {
    "TestSliderWidget2D",
    TestSliderWidget2D
  },
  {
    "TestSplineWidget",
    TestSplineWidget
  },
  {
    "TestSurfaceConstrainedHandleWidget",
    TestSurfaceConstrainedHandleWidget
  },
  {
    "TestTensorProbeWidget",
    TestTensorProbeWidget
  },
  {
    "TestTextWidget",
    TestTextWidget
  },

  { CM_NULL, CM_NULL } /* NOLINT */
};

CM_LOCAL const int NumTests = CM_CAST(int,
  sizeof(cmakeGeneratedFunctionMapEntries) / sizeof(functionMapEntry)) - 1;

/* Allocate and create a lowercased copy of string
   (note that it has to be free'd manually) */
CM_LOCAL char* lowercase(const char* string)
{
  char *new_string;
  char *p;
  size_t stringSize;

  stringSize = CM_CAST(size_t, strlen(string) + 1);
  new_string = CM_CAST(char*, malloc(sizeof(char) * stringSize));

  if (new_string == CM_NULL) { /* NOLINT */
    return CM_NULL;            /* NOLINT */
  }
  strcpy(new_string, string);  /* NOLINT */
  for (p = new_string; *p != 0; ++p) {
    *p = CM_CAST(char, tolower(*p));
  }
  return new_string;
}

CM_LOCAL int isTestSkipped(const char *name, int n_skipped_tests, char *skipped_tests[]) {
  int i;
  for (i = 0; i < n_skipped_tests; i++) {
    if (strcmp(name, skipped_tests[i]) == 0) {
      return 1;
    }
  }

  return 0;
}

CM_NAMESPACE_END

int main(int ac, char* av[])
{
  int i;
  int testNum = 0;
  int partial_match;
  int run_all;
  char *arg;
  int testToRun = -1;

  

  /* If no test name was given */
  /* process command line with user function.  */
  if (ac < 2) {
    /* Ask for a test.  */
    printf("Available tests:\n");
    for (i = 0; i < NumTests; ++i) {
      printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
    }
    printf("To run a test, enter the test number: ");
    fflush(stdout);
    if (scanf("%d", &testNum) != 1) {
      printf("Couldn't parse that input as a number\n");
      return -1;
    }
    if (testNum >= NumTests) {
      printf("%3d is an invalid test number.\n", testNum);
      return -1;
    }
    testToRun = testNum;
    ac--;
    av++;
  }
  partial_match = 0;
  run_all = 0;
  arg = CM_NULL; /* NOLINT */
  /* If partial match or running all tests are requested.  */
  if (testToRun == -1 && ac > 1) {
    partial_match = (strcmp(av[1], "-R") == 0) ? 1 : 0;
    run_all = (strcmp(av[1], "-A") == 0) ? 1 : 0;
  }
  if (partial_match != 0 && ac < 3) {
    printf("-R needs an additional parameter.\n");
    return -1;
  }
  if (run_all == 1) {
    clock_t t;
    int status = 0;
    const char* status_message = CM_NULL;
    printf("TAP version 13\n");
    printf("1..%d\n", NumTests);
    for (i = 0; i < NumTests; ++i) {
      const char *name = cmakeGeneratedFunctionMapEntries[i].name;
      if (ac > 2) {
        if (isTestSkipped(name, ac - 2, av + 2) == 1) {
          printf("ok %d %s # SKIP\n", i + 1, name);
          continue;
        }
      }
      t = clock();
      status = (*cmakeGeneratedFunctionMapEntries[i].func)(ac, av);
      t = clock() - t;
      status_message = (status == -1) ? "not ok" : "ok";
      {
        double time_taken = CM_CAST(double, t) / CLOCKS_PER_SEC;
        printf("%s %d %s # %f\n", status_message, i + 1, name, time_taken);
      }
    }
    printf("All tests finished.\n");

    return 0;
  }

  if (testToRun == -1) {
    arg = lowercase(av[1 + partial_match]);
  }
  for (i = 0; i < NumTests && testToRun == -1; ++i) {
    char *test_name = lowercase(cmakeGeneratedFunctionMapEntries[i].name);
    if (partial_match != 0 && strstr(test_name, arg) != CM_NULL) { /* NOLINT */
      testToRun = i;
      ac -= 2;
      av += 2;
    } else if (partial_match == 0 && strcmp(test_name, arg) == 0) {
      testToRun = i;
      ac--;
      av++;
    }
    free(test_name);
  }
  free(arg);
  if (testToRun != -1) {
    int result;

    // Set defaults
    vtkTestingInteractor::ValidBaseline =
      std::string("/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/VTKData") +
      std::string("/Baseline/") +
      std::string("Widgets/") +
      std::string(cmakeGeneratedFunctionMapEntries[testToRun].name) +
      std::string(".png");
    vtkTestingInteractor::TempDirectory =
      std::string("/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/Testing/Temporary");
    vtkTestingInteractor::DataDirectory =
      std::string("/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/VTKData");

    int interactive = 0;
    for (int ii = 0; ii < ac; ++ii)
      {
      if ( strcmp(av[ii],"-I") == 0)
        {
        interactive = 1;
        continue;
        }
      if ( strcmp(av[ii],"-V") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::ValidBaseline = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-T") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::TempDirectory = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-D") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::DataDirectory = std::string(av[ii+1]);
        ++ii;
        continue;
        }
      if ( strcmp(av[ii],"-E") == 0 && ii < ac-1)
        {
        vtkTestingInteractor::ErrorThreshold =
          static_cast<double>(atof(av[ii+1]));
        ++ii;
        continue;
        }
      }
    vtkSmartPointer<vtkTestingObjectFactory> factory = vtkSmartPointer<vtkTestingObjectFactory>::New();
    if (!interactive)
      {
      vtkObjectFactory::RegisterFactory(factory);
      }

    if (testToRun < 0 || testToRun >= NumTests) {
      printf("testToRun was modified by TestDriver code to an invalid value: "
             "%3d.\n",
             testNum);
      return -1;
    }
    result = (*cmakeGeneratedFunctionMapEntries[testToRun].func)(ac, av);
    
   if (!interactive)
     {
     if (vtkTestingInteractor::TestReturnStatus != -1)
        {
        if( vtkTestingInteractor::TestReturnStatus != vtkTesting::PASSED)
          {
          result = EXIT_FAILURE;
          }
        else
          {
          result = EXIT_SUCCESS;
          }
        }
      vtkObjectFactory::UnRegisterFactory(factory);
      }

    return result;
  }

  /* Nothing was run, display the test names.  */
  printf("Available tests:\n");
  for (i = 0; i < NumTests; ++i) {
    printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
  }
  printf("Failed: %s is an invalid test name.\n", av[1]);

  return -1;
}
