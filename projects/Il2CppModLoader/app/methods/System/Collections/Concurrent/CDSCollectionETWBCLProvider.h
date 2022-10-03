#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Concurrent::CDSCollectionETWBCLProvider {
    IL2CPP_REGISTER_METHOD(0x02020E50, void, ctor_1, (app::CDSCollectionETWBCLProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02020EF0, void, ConcurrentDictionary_AcquiringAllLocks, (app::CDSCollectionETWBCLProvider * this_ptr, int32_t num_of_buckets))
    IL2CPP_REGISTER_METHOD(0x02020F20, void, cctor_1, ())
    IL2CPP_REGISTER_METHOD(0x024922E0, void, ctor_2, (app::CDSCollectionETWBCLProvider_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02492380, void, ConcurrentBag_TryTakeSteals, (app::CDSCollectionETWBCLProvider_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024923C0, void, ConcurrentBag_TryPeekSteals, (app::CDSCollectionETWBCLProvider_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02492400, void, cctor_2, ())
} // namespace app::classes::System::Collections::Concurrent::CDSCollectionETWBCLProvider
