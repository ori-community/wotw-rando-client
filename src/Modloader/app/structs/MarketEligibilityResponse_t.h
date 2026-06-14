#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarketEligibilityResponse_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarketEligibilityResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarketEligibilityResponse_t_DEFINED)
#include <Modloader/app/structs/EMarketNotAllowedReasonFlags__Enum.h>
#include <Modloader/app/structs/RTime32.h>
#if defined(IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_RTime32_DEFINED)
#define IL2CPP_STRUCT_MarketEligibilityResponse_t_DEFINED
struct MarketEligibilityResponse_t {
    bool m_bAllowed;
    EMarketNotAllowedReasonFlags__Enum m_eNotAllowedReason;

    struct RTime32 m_rtAllowedAtTime;
    int32_t m_cdaySteamGuardRequiredDays;
    int32_t m_cdayNewDeviceCooldown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarketEligibilityResponse_t_FWDDECL)
#define IL2CPP_STRUCT_MarketEligibilityResponse_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_MarketEligibilityResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarketEligibilityResponse_t_DEFINED) && !defined(IL2CPP_STRUCT_MarketEligibilityResponse_t_FWDDECL)
#include <Modloader/app/structs/MarketEligibilityResponse_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarketEligibilityResponse_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
