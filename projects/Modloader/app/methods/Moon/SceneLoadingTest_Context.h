#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>

namespace app::classes::Moon::SceneLoadingTest_Context {
    IL2CPP_REGISTER_METHOD(0x00ECB200, void, ctor, (app::SceneLoadingTest_Context * this_ptr, app::IProfilingDataProvider* data_provider, app::CsvWriter* writer, app::List_1_System_ValueTuple_2__2* pending_scenes))
    IL2CPP_REGISTER_METHOD(0x00ECB360, void, Dispose, (app::SceneLoadingTest_Context * this_ptr))
} // namespace app::classes::Moon::SceneLoadingTest_Context
