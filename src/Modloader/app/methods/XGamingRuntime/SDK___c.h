#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SDK_c.h>
#include <Modloader/app/structs/XGameSaveBlob.h>
#include <Modloader/app/structs/XGameSaveBlob_1.h>

namespace app::classes::XGamingRuntime::SDK___c {
    IL2CPP_REGISTER_METHOD(0x030B7DA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SDK_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030B7EE0, app::XGameSaveBlob*, _XGameSaveReadBlobDataAsync_b__27_1, app::SDK_c* this_ptr, app::XGameSaveBlob_1 x)
} // namespace app::classes::XGamingRuntime::SDK___c
