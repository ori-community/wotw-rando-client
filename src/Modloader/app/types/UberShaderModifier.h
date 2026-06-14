#pragma once
#include <Modloader/app/structs/UberShaderModifier.h>
#include <Modloader/app/structs/UberShaderModifier__Array.h>
#include <Modloader/app/structs/UberShaderModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderModifier {
        inline app::UberShaderModifier__Class** type_info() {
            static app::UberShaderModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderModifier__Class**)(modloader::win::memory::resolve_rva(0x047040F0));
            }
            return cache;
        }
        inline app::UberShaderModifier__Class* get_class() {
            return il2cpp::get_class<app::UberShaderModifier__Class>(type_info(), "", "UberShaderModifier");
        }
        inline app::UberShaderModifier* create() {
            return il2cpp::create_object<app::UberShaderModifier>(get_class());
        }
        inline app::UberShaderModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderModifier__Array>(get_class(), size);
        }
        inline app::UberShaderModifier__Array* create_array(const std::vector<app::UberShaderModifier*>& items) {
            return il2cpp::array_new<app::UberShaderModifier__Array>(get_class(), items);
        }
    } // namespace UberShaderModifier
} // namespace app::classes::types
