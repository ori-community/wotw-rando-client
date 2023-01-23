#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler_c.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_IEnumerable_1_.h>

namespace app::classes::frameworks::xboxLive::XboxOneFileBasedStorageHandler___c {
    IL2CPP_REGISTER_METHOD(0x00F6C360, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneFileBasedStorageHandler_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F6C4A0, app::Byte__Array*, _Read_b__3_0, (app::XboxOneFileBasedStorageHandler_c * this_ptr, app::Task_1_System_Collections_Generic_IEnumerable_1_* t))
    IL2CPP_REGISTER_METHODINFO(0x04775F08, XboxOneFileBasedStorageHandler_c__Read_b__3_0__MethodInfo)
} // namespace app::classes::frameworks::xboxLive::XboxOneFileBasedStorageHandler___c
