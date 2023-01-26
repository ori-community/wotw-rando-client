#pragma once
#include <Modloader/app/structs/ArtKitVersionInfo.h>
#include <Modloader/app/structs/ArtKitVersionInfo__Array.h>
#include <Modloader/app/structs/ArtKitVersionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtKitVersionInfo {
        inline app::ArtKitVersionInfo__Class** type_info() {
            static app::ArtKitVersionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtKitVersionInfo__Class**)(modloader::win::memory::resolve_rva(0x047632F8));
            }
            return cache;
        }
        inline app::ArtKitVersionInfo__Class* get_class() {
            return il2cpp::get_class<app::ArtKitVersionInfo__Class>(type_info(), "Moon.EditorTools.ArtKit", "ArtKitVersionInfo");
        }
        inline app::ArtKitVersionInfo* create() {
            return il2cpp::create_object<app::ArtKitVersionInfo>(get_class());
        }
        inline app::ArtKitVersionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ArtKitVersionInfo__Array>(get_class(), size);
        }
        inline app::ArtKitVersionInfo__Array* create_array(const std::vector<app::ArtKitVersionInfo*>& items) {
            return il2cpp::array_new<app::ArtKitVersionInfo__Array>(get_class(), items);
        }
    } // namespace ArtKitVersionInfo
} // namespace app::classes::types
