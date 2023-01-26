#pragma once
#include <Modloader/app/structs/UberShaderCurveBake.h>
#include <Modloader/app/structs/UberShaderCurveBake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCurveBake {
        inline app::UberShaderCurveBake__Class** type_info() {
            static app::UberShaderCurveBake__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderCurveBake__Class**)(modloader::win::memory::resolve_rva(0x0474F090));
            }
            return cache;
        }
        inline app::UberShaderCurveBake__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurveBake__Class>(type_info(), "", "UberShaderCurveBake");
        }
        inline app::UberShaderCurveBake* create() {
            return il2cpp::create_object<app::UberShaderCurveBake>(get_class());
        }
    } // namespace UberShaderCurveBake
} // namespace app::classes::types
