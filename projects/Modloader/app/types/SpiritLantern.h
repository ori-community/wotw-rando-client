#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritLantern__Class.h>
#include <Modloader/app/structs/SpiritLantern.h>

namespace app::classes::types {
    namespace SpiritLantern {
        namespace {
            inline app::SpiritLantern__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLantern__Class** type_info = &type_info_ref;
        inline app::SpiritLantern__Class* get_class() {
            return il2cpp::get_class<app::SpiritLantern__Class>(type_info, "", "SpiritLantern");
        }
        inline app::SpiritLantern* create() {
            return il2cpp::create_object<app::SpiritLantern>(get_class());
        }
    } // namespace SpiritLantern
} // namespace app::classes::types
