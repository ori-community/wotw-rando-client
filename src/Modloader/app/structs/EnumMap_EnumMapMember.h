#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumMap_EnumMapMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember_DEFINED)
#include <Modloader/app/structs/EnumMap_EnumMapMember__Fields.h>
#if defined(IL2CPP_STRUCT_EnumMap_EnumMapMember__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember_DEFINED
struct EnumMap_EnumMapMember__Class;
struct EnumMap_EnumMapMember {
    struct EnumMap_EnumMapMember__Class* klass;
    MonitorData* monitor;
    struct EnumMap_EnumMapMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember_FWDDECL)
#define IL2CPP_STRUCT_EnumMap_EnumMapMember_FWDDECL
#include <Modloader/app/structs/EnumMap_EnumMapMember__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumMap_EnumMapMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember_DEFINED) && !defined(IL2CPP_STRUCT_EnumMap_EnumMapMember_FWDDECL)
#include <Modloader/app/structs/EnumMap_EnumMapMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumMap_EnumMapMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
