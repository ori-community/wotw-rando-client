#pragma once
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Array.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Boxed.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer_PrewarmedShader {
        inline app::UberShaderPrewarmer_PrewarmedShader__Class** type_info() {
            static app::UberShaderPrewarmer_PrewarmedShader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderPrewarmer_PrewarmedShader__Class**)(modloader::win::memory::resolve_rva(0x0476F1F0));
            }
            return cache;
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderPrewarmer_PrewarmedShader__Class>(type_info(), "", "UberShaderPrewarmer", "PrewarmedShader");
        }
        inline app::UberShaderPrewarmer_PrewarmedShader* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer_PrewarmedShader>(get_class());
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Boxed* box(app::UberShaderPrewarmer_PrewarmedShader value) {
            return il2cpp::box_value<app::UberShaderPrewarmer_PrewarmedShader__Boxed>(get_class(), value);
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderPrewarmer_PrewarmedShader__Array>(get_class(), size);
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array* create_array(const std::vector<app::UberShaderPrewarmer_PrewarmedShader>& items) {
            return il2cpp::array_new<app::UberShaderPrewarmer_PrewarmedShader__Array>(get_class(), items);
        }
    } // namespace UberShaderPrewarmer_PrewarmedShader
} // namespace app::classes::types
