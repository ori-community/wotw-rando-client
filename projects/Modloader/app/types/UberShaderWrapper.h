#pragma once
#include <Modloader/app/structs/UberShaderWrapper.h>
#include <Modloader/app/structs/UberShaderWrapper__Array.h>
#include <Modloader/app/structs/UberShaderWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderWrapper {
        inline app::UberShaderWrapper__Class** type_info() {
            static app::UberShaderWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderWrapper__Class**)(modloader::win::memory::resolve_rva(0x04704498));
            }
            return cache;
        }
        inline app::UberShaderWrapper__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWrapper__Class>(type_info(), "Moon.ArtOptimization", "UberShaderWrapper");
        }
        inline app::UberShaderWrapper* create() {
            return il2cpp::create_object<app::UberShaderWrapper>(get_class());
        }
        inline app::UberShaderWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderWrapper__Array>(get_class(), size);
        }
        inline app::UberShaderWrapper__Array* create_array(const std::vector<app::UberShaderWrapper*>& items) {
            return il2cpp::array_new<app::UberShaderWrapper__Array>(get_class(), items);
        }
    } // namespace UberShaderWrapper
} // namespace app::classes::types
