#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestNodeWisps {
        inline app::QuestNodeWisps__Class** type_info = (app::QuestNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x0470F7B8));
        inline app::QuestNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeWisps__Class>(type_info, "", "QuestNodeWisps");
        }
        inline app::QuestNodeWisps* create() {
            return il2cpp::create_object<app::QuestNodeWisps>(get_class());
        }
    } // namespace QuestNodeWisps
} // namespace app::classes::types
