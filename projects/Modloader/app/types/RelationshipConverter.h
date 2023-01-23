#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RelationshipConverter__Class.h>
#include <Modloader/app/structs/RelationshipConverter.h>

namespace app::classes::types {
    namespace RelationshipConverter {
        namespace {
            inline app::RelationshipConverter__Class* type_info_ref = nullptr;
        }
        inline app::RelationshipConverter__Class** type_info = &type_info_ref;
        inline app::RelationshipConverter__Class* get_class() {
            return il2cpp::get_class<app::RelationshipConverter__Class>(type_info, "System.Data", "RelationshipConverter");
        }
        inline app::RelationshipConverter* create() {
            return il2cpp::create_object<app::RelationshipConverter>(get_class());
        }
    } // namespace RelationshipConverter
} // namespace app::classes::types
