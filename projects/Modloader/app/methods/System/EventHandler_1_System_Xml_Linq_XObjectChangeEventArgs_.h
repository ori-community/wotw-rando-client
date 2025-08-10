#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::System::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* this_ptr,
        app::Object* sender,
        app::XObjectChangeEventArgs* e
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_
