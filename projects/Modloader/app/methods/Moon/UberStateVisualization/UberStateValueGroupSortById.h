#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::UberStateValueGroupSortById {
    IL2CPP_REGISTER_METHOD(0x030C4770, int32_t, Compare, (app::UberStateValueGroupSortById * this_ptr, app::UberStateValueGroup* group1, app::UberStateValueGroup* group2))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateValueGroupSortById * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::UberStateValueGroupSortById
