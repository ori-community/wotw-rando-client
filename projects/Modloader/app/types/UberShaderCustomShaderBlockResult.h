#pragma once
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Boxed.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderBlockResult {
        inline app::UberShaderCustomShaderBlockResult__Class** type_info() {
            static app::UberShaderCustomShaderBlockResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderCustomShaderBlockResult__Class**)(modloader::win::memory::resolve_rva(0x04768658));
            }
            return cache;
        }
        inline app::UberShaderCustomShaderBlockResult__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderBlockResult__Class>(type_info(), "", "UberShaderCustomShaderBlockResult");
        }
        inline app::UberShaderCustomShaderBlockResult* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderBlockResult>(get_class());
        }
        inline app::UberShaderCustomShaderBlockResult__Boxed* box(app::UberShaderCustomShaderBlockResult value) {
            return il2cpp::box_value<app::UberShaderCustomShaderBlockResult__Boxed>(get_class(), value);
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCustomShaderBlockResult__Array>(get_class(), size);
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create_array(const std::vector<app::UberShaderCustomShaderBlockResult>& items) {
            return il2cpp::array_new<app::UberShaderCustomShaderBlockResult__Array>(get_class(), items);
        }
    } // namespace UberShaderCustomShaderBlockResult
} // namespace app::classes::types
