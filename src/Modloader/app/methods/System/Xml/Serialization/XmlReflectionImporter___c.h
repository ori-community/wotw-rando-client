#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlReflectionImporter_c.h>
#include <Modloader/app/structs/XmlReflectionMember.h>

namespace app::classes::System::Xml::Serialization::XmlReflectionImporter___c {
    IL2CPP_REGISTER_METHOD(0x025AB550, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlReflectionImporter_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025AB690,
        int32_t,
        _ImportClassMapping_b__28_0,
        app::XmlReflectionImporter_c* this_ptr,
        app::XmlReflectionMember* m1,
        app::XmlReflectionMember* m2
    )
} // namespace app::classes::System::Xml::Serialization::XmlReflectionImporter___c
