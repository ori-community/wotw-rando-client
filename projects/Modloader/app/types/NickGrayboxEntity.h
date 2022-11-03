#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NickGrayboxEntity {
        namespace {
            inline app::NickGrayboxEntity__Class* type_info_ref = nullptr;
        }
        inline app::NickGrayboxEntity__Class** type_info = &type_info_ref;
        inline app::NickGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::NickGrayboxEntity__Class>(type_info, "", "NickGrayboxEntity");
        }
        inline app::NickGrayboxEntity* create() {
            return il2cpp::create_object<app::NickGrayboxEntity>(get_class());
        }
    } // namespace NickGrayboxEntity
} // namespace app::classes::types
