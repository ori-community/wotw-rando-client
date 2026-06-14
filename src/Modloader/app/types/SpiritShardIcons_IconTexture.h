#pragma once
#include <Modloader/app/structs/SpiritShardIcons_IconTexture.h>
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Array.h>
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Boxed.h>
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIcons_IconTexture {
        inline app::SpiritShardIcons_IconTexture__Class** type_info() {
            static app::SpiritShardIcons_IconTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardIcons_IconTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardIcons_IconTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardIcons_IconTexture__Class>(type_info(), "", "SpiritShardIcons", "IconTexture");
        }
        inline app::SpiritShardIcons_IconTexture* create() {
            return il2cpp::create_object<app::SpiritShardIcons_IconTexture>(get_class());
        }
        inline app::SpiritShardIcons_IconTexture__Boxed* box(app::SpiritShardIcons_IconTexture value) {
            return il2cpp::box_value<app::SpiritShardIcons_IconTexture__Boxed>(get_class(), value);
        }
        inline app::SpiritShardIcons_IconTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardIcons_IconTexture__Array>(get_class(), size);
        }
        inline app::SpiritShardIcons_IconTexture__Array* create_array(const std::vector<app::SpiritShardIcons_IconTexture>& items) {
            return il2cpp::array_new<app::SpiritShardIcons_IconTexture__Array>(get_class(), items);
        }
    } // namespace SpiritShardIcons_IconTexture
} // namespace app::classes::types
