#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsByRefLikeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsByRefLikeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsByRefLikeAttribute_DEFINED)
#define IL2CPP_STRUCT_IsByRefLikeAttribute_DEFINED
struct IsByRefLikeAttribute__Class;
struct IsByRefLikeAttribute {
    struct IsByRefLikeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IsByRefLikeAttribute_FWDDECL)
#define IL2CPP_STRUCT_IsByRefLikeAttribute_FWDDECL
#include <Modloader/app/structs/IsByRefLikeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IsByRefLikeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsByRefLikeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IsByRefLikeAttribute_FWDDECL)
#include <Modloader/app/structs/IsByRefLikeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsByRefLikeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
