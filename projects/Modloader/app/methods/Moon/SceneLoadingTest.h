#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneLoadingTest_RunState__Enum.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__3.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_String___Array.h>

namespace app::classes::Moon::SceneLoadingTest {
    IL2CPP_REGISTER_METHOD(0x00EC6950, app::SceneLoadingTest_RunState__Enum, get_State, ())
    IL2CPP_REGISTER_METHOD(0x00EC6A90, void, Start, ())
    IL2CPP_REGISTER_METHOD(0x00EC6DA0, void, Stop, ())
    IL2CPP_REGISTER_METHOD(0x00EC6ED0, app::Task*, LoadEmptyScene, ())
    IL2CPP_REGISTER_METHOD(0x00EC71C0, app::IEnumerator*, LoadEmptySceneCoroutine, (app::TaskCompletionSource_1_System_Object_ * tcs))
    IL2CPP_REGISTER_METHOD(0x00EC7310, app::Task*, Execute, (app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x00EC7420, app::Task*, LoadAndUnloadScene, (app::SceneLoadingTest_Context * ctx, int32_t build_index, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x00EC7540, app::Task*, ExtraDelay, ())
    IL2CPP_REGISTER_METHOD(0x00EC7630, app::Task*, AsyncOperationToTask, (app::AsyncOperation_1 * op))
    IL2CPP_REGISTER_METHOD(0x00EC7A30, void, WriteOutputHeader, (app::SceneLoadingTest_Context * ctx))
    IL2CPP_REGISTER_METHOD(0x00EC7CC0, void, WriteStats, (app::SceneLoadingTest_Context * ctx, app::SceneLoadingTest_Stats* stats))
    IL2CPP_REGISTER_METHOD(0x00EC7E90, bool, IsResumingRun, ())
    IL2CPP_REGISTER_METHOD(0x00EC7F60, app::List_1_System_String_*, GetAlreadyTestedScenes, ())
    IL2CPP_REGISTER_METHOD(0x00EC84B0, app::List_1_System_ValueTuple_2__2*, GetGameSceneList, ())
    IL2CPP_REGISTER_METHOD(0x00EC88F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01550DE0, void, ShuffleList_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x01586670, app::Object__Array*, DuplicateList_1, (app::List_1_System_Object_ * list, int32_t copies))
    IL2CPP_REGISTER_METHOD(0x01586670, app::ValueTuple_2_Int32_String___Array*, DuplicateList_2, (app::List_1_System_ValueTuple_2__2 * list, int32_t copies))
    IL2CPP_REGISTER_METHOD(0x01551050, void, ShuffleList_2, (app::List_1_System_ValueTuple_2__2 * list))
    IL2CPP_REGISTER_METHOD(0x01551050, void, ShuffleList_3, (app::List_1_System_ValueTuple_2__3 * list))
    IL2CPP_REGISTER_METHOD(0x01586670, app::ValueTuple_2_Int32_Object___Array*, DuplicateList_3, (app::List_1_System_ValueTuple_2__3 * list, int32_t copies))
} // namespace app::classes::Moon::SceneLoadingTest
