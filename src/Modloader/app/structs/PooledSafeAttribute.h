#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PooledSafeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PooledSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledSafeAttribute_DEFINED)
#define IL2CPP_STRUCT_PooledSafeAttribute_DEFINED
struct PooledSafeAttribute__Class;
struct PooledSafeAttribute {
    struct PooledSafeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PooledSafeAttribute_FWDDECL)
#define IL2CPP_STRUCT_PooledSafeAttribute_FWDDECL
#include <Modloader/app/structs/PooledSafeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PooledSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledSafeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PooledSafeAttribute_FWDDECL)
#include <Modloader/app/structs/PooledSafeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PooledSafeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
