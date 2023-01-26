#pragma once
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundDescriptor {
        inline app::SoundDescriptor__Class** type_info() {
            static app::SoundDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477A0A8));
            }
            return cache;
        }
        inline app::SoundDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SoundDescriptor__Class>(type_info(), "", "SoundDescriptor");
        }
        inline app::SoundDescriptor* create() {
            return il2cpp::create_object<app::SoundDescriptor>(get_class());
        }
    } // namespace SoundDescriptor
} // namespace app::classes::types
