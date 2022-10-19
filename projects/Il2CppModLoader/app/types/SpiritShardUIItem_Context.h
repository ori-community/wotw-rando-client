#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIItem_Context {
        inline app::SpiritShardUIItem_Context__Class** type_info = (app::SpiritShardUIItem_Context__Class**)(modloader::win::memory::resolve_rva(0x04790420));
        inline app::SpiritShardUIItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIItem_Context__Class>(type_info, "", "SpiritShardUIItem", "Context");
        }
        inline app::SpiritShardUIItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardUIItem_Context>(get_class());
        }
    } // namespace SpiritShardUIItem_Context
} // namespace app::classes::types
