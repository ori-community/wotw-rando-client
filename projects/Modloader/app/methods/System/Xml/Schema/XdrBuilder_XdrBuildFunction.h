#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XdrBuilder.h>
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>

namespace app::classes::System::Xml::Schema::XdrBuilder_XdrBuildFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XdrBuilder_XdrBuildFunction* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01434270,
        void,
        Invoke,
        app::XdrBuilder_XdrBuildFunction* this_ptr,
        app::XdrBuilder* builder,
        app::Object* obj,
        app::String* prefix
    )
    IL2CPP_REGISTER_METHOD(
        0x00DC7DB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::XdrBuilder_XdrBuildFunction* this_ptr,
        app::XdrBuilder* builder,
        app::Object* obj,
        app::String* prefix,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::XdrBuilder_XdrBuildFunction* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Xml::Schema::XdrBuilder_XdrBuildFunction
