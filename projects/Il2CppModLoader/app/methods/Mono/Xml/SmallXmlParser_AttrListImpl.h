#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Xml::SmallXmlParser_AttrListImpl {
    IL2CPP_REGISTER_METHOD(0x0228A230, int32_t, get_Length, (app::SmallXmlParser_AttrListImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228A2C0, app::String *, GetName, (app::SmallXmlParser_AttrListImpl * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0228A370, app::String *, GetValue_1, (app::SmallXmlParser_AttrListImpl * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0228A420, app::String *, GetValue_2, (app::SmallXmlParser_AttrListImpl * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x0228A570, app::String__Array *, get_Names, (app::SmallXmlParser_AttrListImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228A600, app::String__Array *, get_Values, (app::SmallXmlParser_AttrListImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228A690, void, Clear, (app::SmallXmlParser_AttrListImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228A770, void, Add, (app::SmallXmlParser_AttrListImpl * this_ptr, app::String * name, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0228A840, void, ctor, (app::SmallXmlParser_AttrListImpl * this_ptr))
}
