#pragma once
#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/ILGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILGenerator {
        inline app::ILGenerator__Class** type_info() {
            static app::ILGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ILGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ILGenerator__Class* get_class() {
            return il2cpp::get_class<app::ILGenerator__Class>(type_info(), "System.Reflection.Emit", "ILGenerator");
        }
        inline app::ILGenerator* create() {
            return il2cpp::create_object<app::ILGenerator>(get_class());
        }
    } // namespace ILGenerator
} // namespace app::classes::types
