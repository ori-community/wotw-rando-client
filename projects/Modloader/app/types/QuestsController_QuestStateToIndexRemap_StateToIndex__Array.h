#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex__Array__Class.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex__Array.h>

namespace app::classes::types {
    namespace QuestsController_QuestStateToIndexRemap_StateToIndex__Array {
        namespace {
            inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array__Class* type_info_ref = nullptr;
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array__Class** type_info = &type_info_ref;
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array__Class>(type_info, "", "QuestsController+QuestStateToIndexRemap+StateToIndex[]");
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array* create() {
            return il2cpp::create_object<app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array>(get_class());
        }
    } // namespace QuestsController_QuestStateToIndexRemap_StateToIndex__Array
} // namespace app::classes::types
