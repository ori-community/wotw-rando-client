#pragma once
#include <Modloader/app/structs/PlatformPuppet.h>
#include <Modloader/app/structs/PlatformPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformPuppet {
        inline app::PlatformPuppet__Class** type_info() {
            static app::PlatformPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformPuppet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformPuppet__Class* get_class() {
            return il2cpp::get_class<app::PlatformPuppet__Class>(type_info(), "", "PlatformPuppet");
        }
        inline app::PlatformPuppet* create() {
            return il2cpp::create_object<app::PlatformPuppet>(get_class());
        }
    } // namespace PlatformPuppet
} // namespace app::classes::types
