#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberInfoSerializationHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder_DEFINED)
#include <Modloader/app/structs/MemberInfoSerializationHolder__Fields.h>
#if defined(IL2CPP_STRUCT_MemberInfoSerializationHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder_DEFINED
struct MemberInfoSerializationHolder__Class;
struct MemberInfoSerializationHolder {
    struct MemberInfoSerializationHolder__Class* klass;
    MonitorData* monitor;
    struct MemberInfoSerializationHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder_FWDDECL)
#define IL2CPP_STRUCT_MemberInfoSerializationHolder_FWDDECL
#include <Modloader/app/structs/MemberInfoSerializationHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberInfoSerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder_DEFINED) && !defined(IL2CPP_STRUCT_MemberInfoSerializationHolder_FWDDECL)
#include <Modloader/app/structs/MemberInfoSerializationHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberInfoSerializationHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
