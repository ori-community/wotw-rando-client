#pragma once
#include <Modloader/app/structs/QuestNodeWisps.h>
#include <Modloader/app/structs/QuestNodeWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeWisps {
        inline app::QuestNodeWisps__Class** type_info() {
            static app::QuestNodeWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x0470F7B8));
            }
            return cache;
        }
        inline app::QuestNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeWisps__Class>(type_info(), "", "QuestNodeWisps");
        }
        inline app::QuestNodeWisps* create() {
            return il2cpp::create_object<app::QuestNodeWisps>(get_class());
        }
    } // namespace QuestNodeWisps
} // namespace app::classes::types
