import java.nio.charset.StandardCharsets
import java.nio.file.Files.exists
import java.nio.file.{Files, Paths, StandardOpenOption}

import scala.collection.mutable
import scala.io.Source

class IniFile {
  val entries: mutable.SortedMap[String, mutable.SortedMap[String, String]] = mutable.SortedMap()

  def read_option[T](section: String, field: String)(implicit c: Converter[T]): Option[T] = {
    val section_entry = entries.get(section)
    if (section_entry.isDefined) {
      val field_entry = section_entry.get.get(field)
      if (field_entry.isDefined)
        return c.convert(field_entry.get)
    }

    None
  }

  def read[T](section: String, field: String, default: T)(implicit c: Converter[T]): T = {
    val value = read_option(section, field)
    if (value.isDefined) value.get else default
  }

  def write[T](section: String, field: String, value: T): Unit = {
    val section_entry = entries.get(section)
    if (section_entry.isDefined)
      section_entry.get(field) = value.toString
    else
      entries(section) = mutable.SortedMap(field -> value.toString)
  }

  def clear(): Unit = entries.clear()

  def load(path: String): Boolean = {
    if (!exists(Paths.get(path)))
      return false

    val source = Source.fromFile(path)
    val lines = source.getLines()
    var section = ""
    for (line <- lines) {
      val separator = line.indexOf('=')
      if (separator >= 0) {
        val field = line.substring(0, separator).trim
        val value = line.substring(separator + 1).trim
        entries(section)(field) = value
      } else if (line.startsWith("[") && line.endsWith("]")) {
        section = line.substring(1, line.length - 1)
        if (!entries.contains(section))
          entries(section) = mutable.SortedMap[String, String]()
      }
    }

    source.close()
    true
  }

  def save(path: String): Boolean = {
    try {
      val writer = Files.newBufferedWriter(Paths.get(path), StandardCharsets.UTF_8,
        StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING, StandardOpenOption.WRITE)

      for (section <- entries) {
        writer.write("[" + section._1 + "]")
        writer.newLine()

        for (field <- section._2) {
          writer.write(field._1 + "=" + field._2)
          writer.newLine()
        }
      }

      writer.close()
      true
    } catch {
      case _: Exception => false
    }
  }

  trait Converter[T] { self =>
    def convert(v: String): Option[T]
  }

  object Converter{
    implicit val long_loader: Converter[Long] = (v: String) => v.toLongOption
    implicit val int_loader: Converter[Int] = (v: String) => v.toIntOption
    implicit val float_loader: Converter[Float] = (v: String) => v.toFloatOption
    implicit val bool_loader: Converter[Boolean] = (v: String) => v.toBooleanOption
    implicit val string_loader: Converter[String] = (v: String) => Some(v)
  }
}
