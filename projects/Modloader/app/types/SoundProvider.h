#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundProvider__Class.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundProvider__Array.h>

namespace app::classes::types {
    namespace SoundProvider {
        inline app::SoundProvider__Class** type_info = (app::SoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04712020));
        inline app::SoundProvider__Class* get_class() {
            return il2cpp::get_class<app::SoundProvider__Class>(type_info, "", "SoundProvider");
        }
        inline app::SoundProvider* create() {
            return il2cpp::create_object<app::SoundProvider>(get_class());
        }
        inline app::SoundProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundProvider__Array>(get_class(), size);
        }
        inline app::SoundProvider__Array* create_array(const std::vector<app::SoundProvider*>& items) {
            return il2cpp::array_new<app::SoundProvider__Array>(get_class(), items);
        }
    } // namespace SoundProvider
} // namespace app::classes::types
