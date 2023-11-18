#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest__Boxed.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorRequest {
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class**)(modloader::win::memory::resolve_rva(0x04733A58));
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "ColorRequest");
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
