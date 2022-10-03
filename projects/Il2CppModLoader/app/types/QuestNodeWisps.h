#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeWisps {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuestNodeWisps__Class** type_info;
        inline app::QuestNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeWisps__Class>(type_info, "", "QuestNodeWisps");
        }
        inline app::QuestNodeWisps* create() {
            return il2cpp::create_object<app::QuestNodeWisps>(get_class());
        }
    } // namespace QuestNodeWisps
} // namespace app::classes::types
