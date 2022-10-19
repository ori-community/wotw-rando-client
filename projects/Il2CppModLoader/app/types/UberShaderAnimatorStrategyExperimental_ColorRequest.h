#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorRequest {
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class** type_info = (app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class**)(modloader::win::memory::resolve_rva(0x04733A58));
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "ColorRequest");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorRequest>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Boxed* box(app::UberShaderAnimatorStrategyExperimental_ColorRequest value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_ColorRequest>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorRequest
} // namespace app::classes::types
