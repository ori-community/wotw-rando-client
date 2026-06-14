#pragma once
#include <Modloader/app/structs/SpiritShardUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardUIItem_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIItem_Context {
        inline app::SpiritShardUIItem_Context__Class** type_info() {
            static app::SpiritShardUIItem_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardUIItem_Context__Class**)(modloader::win::memory::resolve_rva(0x04790420));
            }
            return cache;
        }
        inline app::SpiritShardUIItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIItem_Context__Class>(type_info(), "", "SpiritShardUIItem", "Context");
        }
        inline app::SpiritShardUIItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardUIItem_Context>(get_class());
        }
    } // namespace SpiritShardUIItem_Context
} // namespace app::classes::types
