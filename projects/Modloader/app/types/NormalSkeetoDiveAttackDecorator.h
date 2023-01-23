#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NormalSkeetoDiveAttackDecorator__Class.h>
#include <Modloader/app/structs/NormalSkeetoDiveAttackDecorator.h>

namespace app::classes::types {
    namespace NormalSkeetoDiveAttackDecorator {
        namespace {
            inline app::NormalSkeetoDiveAttackDecorator__Class* type_info_ref = nullptr;
        }
        inline app::NormalSkeetoDiveAttackDecorator__Class** type_info = &type_info_ref;
        inline app::NormalSkeetoDiveAttackDecorator__Class* get_class() {
            return il2cpp::get_class<app::NormalSkeetoDiveAttackDecorator__Class>(type_info, "", "NormalSkeetoDiveAttackDecorator");
        }
        inline app::NormalSkeetoDiveAttackDecorator* create() {
            return il2cpp::create_object<app::NormalSkeetoDiveAttackDecorator>(get_class());
        }
    } // namespace NormalSkeetoDiveAttackDecorator
} // namespace app::classes::types
