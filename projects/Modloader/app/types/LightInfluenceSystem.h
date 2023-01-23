#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightInfluenceSystem__Class.h>
#include <Modloader/app/structs/LightInfluenceSystem.h>

namespace app::classes::types {
    namespace LightInfluenceSystem {
        namespace {
            inline app::LightInfluenceSystem__Class* type_info_ref = nullptr;
        }
        inline app::LightInfluenceSystem__Class** type_info = &type_info_ref;
        inline app::LightInfluenceSystem__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSystem__Class>(type_info, "", "LightInfluenceSystem");
        }
        inline app::LightInfluenceSystem* create() {
            return il2cpp::create_object<app::LightInfluenceSystem>(get_class());
        }
    } // namespace LightInfluenceSystem
} // namespace app::classes::types
