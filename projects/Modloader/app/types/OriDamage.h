#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriDamage__Class.h>
#include <Modloader/app/structs/OriDamage.h>

namespace app::classes::types {
    namespace OriDamage {
        namespace {
            inline app::OriDamage__Class* type_info_ref = nullptr;
        }
        inline app::OriDamage__Class** type_info = &type_info_ref;
        inline app::OriDamage__Class* get_class() {
            return il2cpp::get_class<app::OriDamage__Class>(type_info, "", "OriDamage");
        }
        inline app::OriDamage* create() {
            return il2cpp::create_object<app::OriDamage>(get_class());
        }
    } // namespace OriDamage
} // namespace app::classes::types
