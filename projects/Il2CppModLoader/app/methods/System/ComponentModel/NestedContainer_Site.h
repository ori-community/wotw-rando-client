#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::NestedContainer_Site {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::NestedContainer_Site * this_ptr, app::IComponent * component, app::NestedContainer * container, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IComponent *, get_Component, (app::NestedContainer_Site * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IContainer *, get_Container, (app::NestedContainer_Site * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02990950, app::Object *, GetService, (app::NestedContainer_Site * this_ptr, app::Type * service))
    IL2CPP_REGISTER_METHOD(0x02990A40, bool, get_DesignMode, (app::NestedContainer_Site * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02990B20, app::String *, get_FullName, (app::NestedContainer_Site * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Name, (app::NestedContainer_Site * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDA170, void, set_Name, (app::NestedContainer_Site * this_ptr, app::String * value))
}
