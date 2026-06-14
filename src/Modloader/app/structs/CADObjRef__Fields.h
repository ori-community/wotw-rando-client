#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADObjRef__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADObjRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADObjRef__Fields_DEFINED)
#define IL2CPP_STRUCT_CADObjRef__Fields_DEFINED
struct ObjRef;
struct Byte__Array;
struct __declspec(align(8)) CADObjRef__Fields {
    struct ObjRef* objref;
    int32_t SourceDomain;
    struct Byte__Array* TypeInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_CADObjRef__Fields_FWDDECL)
#define IL2CPP_STRUCT_CADObjRef__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ObjRef.h>
#endif
#undef IL2CPP_STRUCT_CADObjRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADObjRef__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CADObjRef__Fields_FWDDECL)
#include <Modloader/app/structs/CADObjRef__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADObjRef__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
