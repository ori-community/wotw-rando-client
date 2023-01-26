#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Double__Array__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_System_Int64__1.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/List_1_UberPoolPerfTest_PrefabInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#include <Modloader/app/structs/UberPoolPerfTest_ProfileTimings.h>
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#include <Modloader/app/structs/UberPoolPerfTest_TestMode__Enum.h>
#include <Modloader/app/structs/UberPoolPerfTest_Timings.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::UberPoolPerfTest {
    IL2CPP_REGISTER_METHOD(0x00FDFC80, app::UberPoolPerfTest*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00FDFD20, bool, get_IsRunning, ())
    IL2CPP_REGISTER_METHOD(0x00FDFDF0, void, StartTest_1, (app::UberPoolPerfTest_TestMode__Enum mode, bool is_automated_test))
    IL2CPP_REGISTER_METHOD(0x00FE0160, void, StartTest_2, (app::UberPoolPerfTest_TestMode__Enum mode, bool is_automated_test, app::UberPoolPerfTest_Settings* settings))
    IL2CPP_REGISTER_METHOD(0x00FE03F0, void, StopTest, ())
    IL2CPP_REGISTER_METHOD(0x00FE0540, void, OnEnable, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE07B0, void, OnDisable, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE0860, void, CheckInstantiation, (app::UberPoolPerfTest * this_ptr, app::GameObject* new_object))
    IL2CPP_REGISTER_METHOD(0x00FE0930, app::Task*, RunTest, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE0A30, app::Task*, SetupAutomatedTest, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE0B30, void, SeinInvincibilitySetter, (bool new_value))
    IL2CPP_REGISTER_METHOD(0x00FE0C30, void, StoreAdditionalAllocationsToPrefabInfo, (app::UberPoolPerfTest * this_ptr, app::UberPoolPerfTest_PrefabInfo* info))
    IL2CPP_REGISTER_METHOD(0x00FE0E70, void, DestroyAdditionalInstantiations, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE1070, app::Task*, ForcePrefabPrewarmed, (app::UberPoolPerfTest * this_ptr, int32_t count, app::List_1_UnityEngine_GameObject_* instances, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x00FE11B0, app::Task*, BenchmarkSinglePrefabInstantiation, (app::UberPoolPerfTest * this_ptr, app::CsvWriter* output_writer, app::UberPoolPerfTest_PrefabInfo* info, app::Vector3 position, app::Stopwatch* stopwatch, app::List_1_UnityEngine_GameObject_* instances, app::List_1_System_Int64__1* instantiate_timings, app::List_1_System_Int64__1* destruction_timings))
    IL2CPP_REGISTER_METHOD(0x00FE1310, app::Task*, BenchmarkSinglePrefabProfiler, (app::UberPoolPerfTest * this_ptr, app::CsvWriter* output_writer, app::UberPoolPerfTest_PrefabInfo* info, app::List_1_UnityEngine_GameObject_* instances, app::Vector3__Array* spawn_positions, app::IProfilingDataProvider* data_provider))
    IL2CPP_REGISTER_METHOD(0x00FE1450, app::Task*, BenchmarkSinglePrefabPrewarm, (app::UberPoolPerfTest * this_ptr, app::CsvWriter* output_writer, app::UberPoolPerfTest_PrefabInfo* info, app::Stopwatch* stopwatch, app::List_1_UnityEngine_GameObject_* instances, app::List_1_System_Int64__1* instantiation_timings, app::List_1_System_Int64__1* prewarm_timings))
    IL2CPP_REGISTER_METHOD(0x00FE15A0, app::Task*, BenchmarkPrefabInfos, (app::UberPoolPerfTest * this_ptr, app::UberPoolPerfTest_LogCatcher* log_catcher, app::CsvWriter* output_writer, app::Vector3 position, app::List_1_UberPoolPerfTest_PrefabInfo_* prefab_infos))
    IL2CPP_REGISTER_METHOD(0x00FE1700, app::Task_1_System_Collections_Generic_List_1_*, LoadPrefabInfos, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE1820, app::Task*, LoadPoolPrewarmScene, ())
    IL2CPP_REGISTER_METHOD(0x00FE1910, app::Task*, FinishPendingTasks, ())
    IL2CPP_REGISTER_METHOD(0x00FE19F0, app::GameObject*, InstantiateNoThrow, (app::UberPoolPerfTest * this_ptr, app::GameObject* prefab, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x00FE1B70, app::GameObject*, InstantiateDirectNoThrow, (app::UberPoolPerfTest * this_ptr, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x00FE1CB0, app::UberPoolPerfTest_Timings, ComputeTimings, (app::List_1_System_Int64__1 * data))
    IL2CPP_REGISTER_METHOD(0x00FE20B0, int64_t, ComputeMedian, (app::List_1_System_Int64__1 * data))
    IL2CPP_REGISTER_METHOD(0x00FE21A0, app::UberPoolPerfTest_ProfileTimings, ComputeProfileTimings, (app::Double__Array * data, int32_t data_length))
    IL2CPP_REGISTER_METHOD(0x00FE25B0, double, ComputeProfileMedian, (app::Double__Array * data, int32_t data_length))
    IL2CPP_REGISTER_METHOD(0x00FE2660, app::CsvWriter*, OpenOutputWriter, (app::UberPoolPerfTest_TestMode__Enum mode, bool use_static_output_file_name, int32_t iteration))
    IL2CPP_REGISTER_METHOD(0x00FE29A0, app::String*, GetOutputPath, (app::UberPoolPerfTest_TestMode__Enum mode, bool use_static_output_file_name))
    IL2CPP_REGISTER_METHOD(0x00FE2C20, void, CreateDoneFile, ())
    IL2CPP_REGISTER_METHOD(0x00FE2D30, void, WriteCsvHeaderTimings, (app::CsvWriter * writer, app::String* timing_name))
    IL2CPP_REGISTER_METHOD(0x00FE2F10, void, WriteCsvHeader, (app::UberPoolPerfTest_TestMode__Enum mode, app::CsvWriter* writer, app::UberPoolPerfTest_Settings* settings))
    IL2CPP_REGISTER_METHOD(0x00FE32D0, void, WriteCsvPrefabInfoProfiling, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo* info, app::Double__Array__Array* data, int32_t data_length))
    IL2CPP_REGISTER_METHOD(0x00FE3500, void, WriteCsvPrefabInfoInstantiations, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo* info, app::UberPoolPerfTest_Timings* instantiation_timings, app::UberPoolPerfTest_Timings* destruction_timings))
    IL2CPP_REGISTER_METHOD(0x00FE3690, void, WriteCsvPrefabInfoPrewarm, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo* info, app::UberPoolPerfTest_Timings* instantiation_timings, app::UberPoolPerfTest_Timings* prewarm_timings))
    IL2CPP_REGISTER_METHOD(0x00FE3820, void, WriteCsvPrefabInfo, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo* info))
    IL2CPP_REGISTER_METHOD(0x00FE3C90, void, WriteCsvPrefabInfoDiagnostics, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo* info))
    IL2CPP_REGISTER_METHOD(0x00FE40C0, app::List_1_System_ValueTuple_2__2*, DeduplicateStrings, (app::IEnumerable_1_System_String_ * strings))
    IL2CPP_REGISTER_METHOD(0x00FE4840, app::String*, NormalizeDiagnostic, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x00FE49D0, void, WriteCsvTimings, (app::CsvWriter * writer, app::UberPoolPerfTest_Timings timings))
    IL2CPP_REGISTER_METHOD(0x00FE4B00, void, WriteCsvProfileTimings, (app::CsvWriter * writer, app::UberPoolPerfTest_ProfileTimings timings))
    IL2CPP_REGISTER_METHOD(0x00FE4D60, void, WriteCsvTicks, (app::CsvWriter * writer, int64_t value))
    IL2CPP_REGISTER_METHOD(0x00FE4F90, void, ctor, (app::UberPoolPerfTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FE5110, void, cctor, ())
} // namespace app::classes::UberPoolPerfTest
