#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngineInternal::TypeInferenceRuleAttribute {
    IL2CPP_REGISTER_METHOD(0x02C7AB90, void, ctor_1, (app::TypeInferenceRuleAttribute * this_ptr, app::TypeInferenceRules__Enum rule))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::TypeInferenceRuleAttribute * this_ptr, app::String* rule))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String*, ToString, (app::TypeInferenceRuleAttribute * this_ptr))
} // namespace app::classes::UnityEngineInternal::TypeInferenceRuleAttribute
