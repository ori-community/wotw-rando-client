#pragma once
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundHost__Array.h>
#include <Modloader/app/structs/SoundHost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundHost {
        inline app::SoundHost__Class** type_info() {
            static app::SoundHost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundHost__Class**)(modloader::win::memory::resolve_rva(0x04745270));
            }
            return cache;
        }
        inline app::SoundHost__Class* get_class() {
            return il2cpp::get_class<app::SoundHost__Class>(type_info(), "Moon.Wwise", "SoundHost");
        }
        inline app::SoundHost* create() {
            return il2cpp::create_object<app::SoundHost>(get_class());
        }
        inline app::SoundHost__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundHost__Array>(get_class(), size);
        }
        inline app::SoundHost__Array* create_array(const std::vector<app::SoundHost*>& items) {
            return il2cpp::array_new<app::SoundHost__Array>(get_class(), items);
        }
    } // namespace SoundHost
} // namespace app::classes::types
