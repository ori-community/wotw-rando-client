#pragma once
#include <Modloader/app/structs/UberShaderWorldProperty.h>
#include <Modloader/app/structs/UberShaderWorldProperty__Array.h>
#include <Modloader/app/structs/UberShaderWorldProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldProperty {
        inline app::UberShaderWorldProperty__Class** type_info() {
            static app::UberShaderWorldProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderWorldProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderWorldProperty__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldProperty__Class>(type_info(), "", "UberShaderWorldProperty");
        }
        inline app::UberShaderWorldProperty* create() {
            return il2cpp::create_object<app::UberShaderWorldProperty>(get_class());
        }
        inline app::UberShaderWorldProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderWorldProperty__Array>(get_class(), size);
        }
        inline app::UberShaderWorldProperty__Array* create_array(const std::vector<app::UberShaderWorldProperty*>& items) {
            return il2cpp::array_new<app::UberShaderWorldProperty__Array>(get_class(), items);
        }
    } // namespace UberShaderWorldProperty
} // namespace app::classes::types
