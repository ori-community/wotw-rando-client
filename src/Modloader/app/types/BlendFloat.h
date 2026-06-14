#pragma once
#include <Modloader/app/structs/BlendFloat.h>
#include <Modloader/app/structs/BlendFloat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendFloat {
        inline app::BlendFloat__Class** type_info() {
            static app::BlendFloat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendFloat__Class**)(modloader::win::memory::resolve_rva(0x04714D88));
            }
            return cache;
        }
        inline app::BlendFloat__Class* get_class() {
            return il2cpp::get_class<app::BlendFloat__Class>(type_info(), "", "BlendFloat");
        }
        inline app::BlendFloat* create() {
            return il2cpp::create_object<app::BlendFloat>(get_class());
        }
    } // namespace BlendFloat
} // namespace app::classes::types
