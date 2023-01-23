#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplaySoundParameterMap__Class.h>
#include <Modloader/app/structs/GameplaySoundParameterMap.h>

namespace app::classes::types {
    namespace GameplaySoundParameterMap {
        namespace {
            inline app::GameplaySoundParameterMap__Class* type_info_ref = nullptr;
        }
        inline app::GameplaySoundParameterMap__Class** type_info = &type_info_ref;
        inline app::GameplaySoundParameterMap__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundParameterMap__Class>(type_info, "", "GameplaySoundParameterMap");
        }
        inline app::GameplaySoundParameterMap* create() {
            return il2cpp::create_object<app::GameplaySoundParameterMap>(get_class());
        }
    } // namespace GameplaySoundParameterMap
} // namespace app::classes::types
