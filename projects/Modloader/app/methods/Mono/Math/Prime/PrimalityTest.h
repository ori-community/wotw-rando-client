#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PrimalityTest.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/ConfidenceFactor__Enum.h>
#include <Modloader/app/structs/ConfidenceFactor__Enum_1.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PrimalityTest_1.h>

namespace app::classes::Mono::Math::Prime::PrimalityTest {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::PrimalityTest * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke_1, (app::PrimalityTest * this_ptr, app::BigInteger* bi, app::ConfidenceFactor__Enum confidence))
    IL2CPP_REGISTER_METHOD(0x023CDC30, app::IAsyncResult*, BeginInvoke_1, (app::PrimalityTest * this_ptr, app::BigInteger* bi, app::ConfidenceFactor__Enum confidence, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_1, (app::PrimalityTest * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::PrimalityTest_1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke_2, (app::PrimalityTest_1 * this_ptr, app::BigInteger_1* bi, app::ConfidenceFactor__Enum_1 confidence))
    IL2CPP_REGISTER_METHOD(0x02A35940, app::IAsyncResult*, BeginInvoke_2, (app::PrimalityTest_1 * this_ptr, app::BigInteger_1* bi, app::ConfidenceFactor__Enum_1 confidence, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_2, (app::PrimalityTest_1 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Math::Prime::PrimalityTest
