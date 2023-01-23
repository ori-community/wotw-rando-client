#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGlidePuppet__Class.h>
#include <Modloader/app/structs/SeinGlidePuppet.h>

namespace app::classes::types {
    namespace SeinGlidePuppet {
        inline app::SeinGlidePuppet__Class** type_info = (app::SeinGlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0476D6C0));
        inline app::SeinGlidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGlidePuppet__Class>(type_info, "", "SeinGlidePuppet");
        }
        inline app::SeinGlidePuppet* create() {
            return il2cpp::create_object<app::SeinGlidePuppet>(get_class());
        }
    } // namespace SeinGlidePuppet
} // namespace app::classes::types
