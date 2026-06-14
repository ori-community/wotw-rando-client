#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueFixup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueFixup__Fields_DEFINED)
#include <Modloader/app/structs/ValueFixupEnum__Enum.h>
#if defined(IL2CPP_STRUCT_ValueFixupEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_ValueFixup__Fields_DEFINED
struct Array;
struct Int32__Array;
struct Object;
struct ReadObjectInfo;
struct String;
struct __declspec(align(8)) ValueFixup__Fields {
    ValueFixupEnum__Enum valueFixupEnum;

    struct Array* arrayObj;
    struct Int32__Array* indexMap;
    struct Object* header;
    struct Object* memberObject;
    struct ReadObjectInfo* objectInfo;
    struct String* memberName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueFixup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValueFixup__Fields_FWDDECL
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ValueFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueFixup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValueFixup__Fields_FWDDECL)
#include <Modloader/app/structs/ValueFixup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueFixup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
