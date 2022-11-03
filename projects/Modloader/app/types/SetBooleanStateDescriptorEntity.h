#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetBooleanStateDescriptorEntity {
        namespace {
            inline app::SetBooleanStateDescriptorEntity__Class* type_info_ref = nullptr;
        }
        inline app::SetBooleanStateDescriptorEntity__Class** type_info = &type_info_ref;
        inline app::SetBooleanStateDescriptorEntity__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanStateDescriptorEntity__Class>(type_info, "Moon.Timeline", "SetBooleanStateDescriptorEntity");
        }
        inline app::SetBooleanStateDescriptorEntity* create() {
            return il2cpp::create_object<app::SetBooleanStateDescriptorEntity>(get_class());
        }
    } // namespace SetBooleanStateDescriptorEntity
} // namespace app::classes::types
