#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_DEFINED
struct Object;
struct MonoTlsProvider;
struct Dictionary_2_System_String_System_Tuple_2_;
struct Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_;
struct MonoTlsProviderFactory__StaticFields {
    struct Object* locker;
    bool initialized;
    struct MonoTlsProvider* defaultProvider;
    struct Dictionary_2_System_String_System_Tuple_2_* providerRegistration;
    struct Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_* providerCache;
    struct Guid UnityTlsId;
    struct Guid AppleTlsId;
    struct Guid BtlsId;
    struct Guid LegacyId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Tuple_2_.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsProviderFactory__StaticFields_FWDDECL)
#include <Modloader/app/structs/MonoTlsProviderFactory__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsProviderFactory__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
