#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectHolder__Fields_DEFINED
struct Object;
struct SerializationInfo;
struct ISerializationSurrogate;
struct FixupHolderList;
struct LongList;
struct ObjectHolder;
struct ValueTypeFixupInfo;
struct TypeLoadExceptionHolder;
struct __declspec(align(8)) ObjectHolder__Fields {
    struct Object* m_object;
    int64_t m_id;
    int32_t m_missingElementsRemaining;
    int32_t m_missingDecendents;
    struct SerializationInfo* m_serInfo;
    struct ISerializationSurrogate* m_surrogate;
    struct FixupHolderList* m_missingElements;
    struct LongList* m_dependentObjects;
    struct ObjectHolder* m_next;
    int32_t m_flags;
    bool m_markForFixupWhenAvailable;
    struct ValueTypeFixupInfo* m_valueFixup;
    struct TypeLoadExceptionHolder* m_typeLoad;
    bool m_reachable;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectHolder__Fields_FWDDECL
#include <Modloader/app/structs/FixupHolderList.h>
#include <Modloader/app/structs/ISerializationSurrogate.h>
#include <Modloader/app/structs/LongList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectHolder.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#include <Modloader/app/structs/ValueTypeFixupInfo.h>
#endif
#undef IL2CPP_STRUCT_ObjectHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectHolder__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
